//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCapture/NSFastEnumeration-Protocol.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration>
{
    AVCaptureSynchronizedDataCollectionInternal *_internal;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x000000000003bbdd
- (id)_shortStringForDataDroppedReason:(long long)arg1;	// IMP=0x000000000003c602
- (id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2;	// IMP=0x000000000003c230
- (void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;	// IMP=0x000000000003c134
- (id)_initWithPossibleDataOutputs:(id)arg1;	// IMP=0x000000000003c08c
- (id)description;	// IMP=0x000000000003c029
- (id)debugDescription;	// IMP=0x000000000003bcfd
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003bcc5
@property(readonly) unsigned long long count;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000003bc89
- (id)synchronizedDataForCaptureOutput:(id)arg1;	// IMP=0x000000000003bc77
- (void)dealloc;	// IMP=0x000000000003bbee

@end

