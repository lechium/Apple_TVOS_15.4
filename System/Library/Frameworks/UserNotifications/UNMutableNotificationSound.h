//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL;

@interface UNMutableNotificationSound
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012ce1
@property(copy, nonatomic) NSURL *vibrationPatternFileURL; // @dynamic vibrationPatternFileURL;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @dynamic vibrationIdentifier;
@property(nonatomic) unsigned long long toneMediaLibraryItemIdentifier; // @dynamic toneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @dynamic toneIdentifier;
@property(copy, nonatomic) NSURL *toneFileURL; // @dynamic toneFileURL;
@property(copy, nonatomic) NSString *toneFileName; // @dynamic toneFileName;
@property(nonatomic) _Bool shouldRepeat; // @dynamic shouldRepeat;
@property(nonatomic) _Bool shouldIgnoreRingerSwitch; // @dynamic shouldIgnoreRingerSwitch;
@property(nonatomic) _Bool shouldIgnoreAccessibilityDisabledVibrationSetting; // @dynamic shouldIgnoreAccessibilityDisabledVibrationSetting;
@property(nonatomic) double maximumDuration; // @dynamic maximumDuration;
@property(nonatomic, getter=isCritical) _Bool critical; // @dynamic critical;
@property(copy, nonatomic) NSNumber *audioVolume; // @dynamic audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @dynamic audioCategory;
@property(copy, nonatomic) NSString *alertTopic; // @dynamic alertTopic;

@end

