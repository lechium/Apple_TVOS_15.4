//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDevice, NSArray, NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKDataCollectorPendingBatch : NSObject
{
    NSUUID *_batchUUID;	// 8 = 0x8
    NSArray *_data;	// 16 = 0x10
    NSDictionary *_metadata;	// 24 = 0x18
    HKDevice *_device;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000146459
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSUUID *batchUUID; // @synthesize batchUUID=_batchUUID;
- (id)description;	// IMP=0x0000000000146369
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 metadata:(id)arg3 device:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000014623a
- (id)init;	// IMP=0x00000000001461c0

@end

