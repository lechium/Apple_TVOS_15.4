//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHome;
@protocol HFCharacteristicValueSource, HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaAccessoryItemUpdateRequest : NSObject
{
    id <HFMediaValueSource> _mediaValueSource;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    id <HFCharacteristicValueSource> _valueSource;	// 24 = 0x18
    id <HFMediaProfileContainer> _mediaProfile;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001bd74d
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) id <HFMediaValueSource> mediaValueSource; // @synthesize mediaValueSource=_mediaValueSource;
- (void)_appendRestartStatusMessageForAccessory:(id)arg1 toResults:(id)arg2;	// IMP=0x00000000001bd71f
- (void)_appendSplitMediaAccountWarningForAccessory:(id)arg1 toResults:(id)arg2;	// IMP=0x00000000001bd5dd
- (void)_appendSplitMediaAccountWarningIfNeededForAccessory:(id)arg1 toResults:(id)arg2;	// IMP=0x00000000001bd443
- (id)_parentMediaSystem;	// IMP=0x00000000001bd354
- (id)accessories;	// IMP=0x00000000001bd304
- (id)_disambiguateMultipleAccessoryResponses:(id)arg1 forMediaSystem:(id)arg2;	// IMP=0x00000000001bc70e
- (id)updateWithOptions:(id)arg1;	// IMP=0x00000000001bb81f
- (id)init;	// IMP=0x00000000001bb76a
- (id)initWithMediaProfileContainer:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000001bb4f1

@end

