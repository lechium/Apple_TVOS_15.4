//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaPlaybackAction, NSArray;

@interface HMDMediaPlaybackActionAsCharacteristicWriteRequests : HMFObject
{
    HMDMediaPlaybackAction *_residualAction;	// 8 = 0x8
    NSArray *_characteristicWriteRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000410e38
@property(readonly) NSArray *characteristicWriteRequests; // @synthesize characteristicWriteRequests=_characteristicWriteRequests;
@property(readonly) HMDMediaPlaybackAction *residualAction; // @synthesize residualAction=_residualAction;
- (id)initWithAction:(id)arg1 characteristicWriteRequests:(id)arg2;	// IMP=0x0000000000410d6a
- (id)init;	// IMP=0x0000000000410cc2

@end

