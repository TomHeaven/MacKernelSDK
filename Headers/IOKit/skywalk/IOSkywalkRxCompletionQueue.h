/*
 * Released under "The BSD 3-Clause License"
 *
 * Copyright (c) 2022 cjiang. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 * 3. The names of its contributors may not be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _IOSKYWALKRXCOMPLETIONQUEUE_H
#define _IOSKYWALKRXCOMPLETIONQUEUE_H

#include <IOKit/skywalk/IOSkywalkPacketQueue.h>

class IOSkywalkRxCompletionQueue : public IOSkywalkPacketQueue
{
    OSDeclareDefaultStructors( IOSkywalkRxCompletionQueue )

public:
    
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  0 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  1 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  2 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  3 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  4 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  5 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  6 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  7 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  8 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue,  9 );
    OSMetaClassDeclareReservedUnused( IOSkywalkRxCompletionQueue, 10 );

protected:
    
};

#endif

virtual IOReturn requestEnqueue(void *,uint);
virtual IOReturn enqueuePackets(IOSkywalkPacket * const*,uint,uint);
virtual IOReturn enqueuePackets(queue_entry const*,uint,uint);

static IOSkywalkRxCompletionQueue * withPool(IOSkywalkPacketBufferPool *,uint,uint,OSObject *,uint (*)(OSObject *,IOSkywalkRxCompletionQueue*,IOSkywalkPacket **,uint,void *),void *,uint);
virtual bool initWithPool(IOSkywalkPacketBufferPool *,uint,uint,OSObject *,uint (*)(OSObject *,IOSkywalkRxCompletionQueue*,IOSkywalkPacket **,uint,void *),void *,uint);

virtual void free() APPLE_KEXT_OVERRIDE;
UInt32 getEffectiveCapacity(uint);
virtual void enable() APPLE_KEXT_OVERRIDE;
virtual void disable() APPLE_KEXT_OVERRIDE;
virtual bool checkForWork() APPLE_KEXT_OVERRIDE;
IOSkywalkRxCompletionQueue::gatedEnqueue(void *,bool *)
virtual IOReturn initialize( void * refCon ) APPLE_KEXT_OVERRIDE;
virtual void finalize() APPLE_KEXT_OVERRIDE;
IOSkywalkRxCompletionQueue::synchronizeNonChain(uint)
virtual IOReturn synchronize( IOOptionBits options ) APPLE_KEXT_OVERRIDE;
virtual IOReturn syncPackets( kern_packet_t * packetArray, UInt32 * packetCount, IOOptionBits options ) APPLE_KEXT_OVERRIDE;
virtual IOReturn setPacketPoller( IOSkywalkPacketPoller * poller ) APPLE_KEXT_OVERRIDE;

virtual UInt32 getPacketCount() APPLE_KEXT_OVERRIDE;
virtual IOReturn sendNotification( IOOptionBits options ) APPLE_KEXT_OVERRIDE;
virtual IOReturn performCommand( UInt32 command, void * data, size_t dataSize ) APPLE_KEXT_OVERRIDE;
void addReporters( IOService * target, OSSet * set );
UInt64 getReportChannelValue( UInt64 reportChannel );
