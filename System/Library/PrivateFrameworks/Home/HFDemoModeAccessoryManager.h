//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol HFCharacteristicValueSource;

@interface HFDemoModeAccessoryManager : NSObject
{
    id <HFCharacteristicValueSource> _valueSource;	// 8 = 0x8
    NSArray *_demoAccessories;	// 16 = 0x10
}

+ (id)_eventsFromString:(id)arg1 startDate:(id)arg2 cameraProfile:(id)arg3;	// IMP=0x000000000000501a
+ (id)_clipStartDateFromComponents:(id)arg1 today:(id)arg2;	// IMP=0x0000000000004e76
+ (id)_demoClipWithURL:(id)arg1 duration:(double)arg2 cameraProfile:(id)arg3;	// IMP=0x0000000000004b48
+ (id)clipsForCameraProfile:(id)arg1;	// IMP=0x0000000000004596
+ (id)demoURLWithCameraName:(id)arg1 fileName:(id)arg2 extension:(id)arg3;	// IMP=0x000000000000449a
+ (id)demoLiveStreamURLForCameraName:(id)arg1;	// IMP=0x000000000000447a
+ (id)demoSnapshotURLForCameraName:(id)arg1;	// IMP=0x000000000000445a
+ (id)imageIconDescriptorFromDictionary:(id)arg1;	// IMP=0x00000000000040d2
+ (_Bool)isPressDemoModeEnabled;	// IMP=0x00000000000040b9
+ (id)demoModeDirectoryURL;	// IMP=0x00000000000040a0
+ (id)profileURLForDemoModeAccessoryName:(id)arg1;	// IMP=0x0000000000003717
+ (id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000000035eb
+ (id)configurationProfileFromAccessoryType:(id)arg1;	// IMP=0x00000000000034bc
+ (_Bool)isInternalAccessoryType:(id)arg1;	// IMP=0x00000000000033d4
+ (_Bool)isValidExternalType:(id)arg1;	// IMP=0x00000000000033cc
+ (id)accessoryProfileName:(id)arg1;	// IMP=0x00000000000033a7
+ (id)sharedManager;	// IMP=0x0000000000003235
- (void).cxx_destruct;	// IMP=0x0000000000005492
@property(retain, nonatomic) NSArray *demoAccessories; // @synthesize demoAccessories=_demoAccessories;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void)dispatchUpdateMessageForAccessory:(id)arg1;	// IMP=0x000000000000434a
- (void)saveAccessories;	// IMP=0x0000000000003def
- (id)accessories;	// IMP=0x000000000000381c
- (id)initWithNullValueSource:(id)arg1;	// IMP=0x00000000000032be

@end
