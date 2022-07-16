//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMMeCardSharingStateController : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000000018a75
- (_Bool)wasSharingEverEnabled;	// IMP=0x000000000001901b
- (void)_syncPreferenceDidChange;	// IMP=0x0000000000018fd4
- (void)_incrementSharingVersion;	// IMP=0x0000000000018f0b
@property(nonatomic) _Bool imageForkedFromMeCard;
@property(nonatomic) _Bool nameForkedFromMeCard;
- (void)postNameFormatChangedNotification;	// IMP=0x0000000000018df0
@property(nonatomic) unsigned long long nameFormat;
@property(nonatomic) unsigned long long sharingAudience;
@property(nonatomic) _Bool sharingEnabled;
- (void)_migrateMeCardDomains;	// IMP=0x0000000000018b06
- (id)init;	// IMP=0x0000000000018aba

@end
