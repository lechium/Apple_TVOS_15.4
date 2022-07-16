//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class NSString;
@protocol HFHomeKitObject;

@interface HFFetchedHomeKitObjectItem <HFHomeKitItemProtocol>
{
    id <HFHomeKitObject> _homeKitObject;	// 8 = 0x8
}

+ (_Bool)alwaysPerformFullFetch;	// IMP=0x0000000000163c22
- (void).cxx_destruct;	// IMP=0x0000000000164305
@property(retain, nonatomic) id <HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
- (id)_homeKitObjectFetch;	// IMP=0x0000000000164246
- (id)initWithHomeKitObject:(id)arg1;	// IMP=0x00000000001641d8
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x0000000000163c2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

