//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IPSettingsUtilities : NSObject
{
}

+ (void)mirrorToWatchIfNecessary;	// IMP=0x000000000000671f
+ (void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006719
+ (void)runPostLanguageChangeOperations;	// IMP=0x000000000000655a
+ (void)setLanguageAndRegion:(id)arg1;	// IMP=0x0000000000006525
+ (void)setRegion:(id)arg1;	// IMP=0x000000000000644f
+ (void)setLanguage:(id)arg1;	// IMP=0x000000000000641a

@end

