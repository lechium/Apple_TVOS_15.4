//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXWeatherUtilities : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000000000114dc
- (id)descriptionForWeatherWFConditionCode:(unsigned long long)arg1;	// IMP=0x0000000000011a43
- (unsigned long long)_weatherCodeForGenericIconName:(id)arg1;	// IMP=0x0000000000011804
- (id)descriptionForPrecipitation:(id)arg1 weatherConditionCode:(unsigned long long)arg2;	// IMP=0x00000000000116ef
- (id)descriptionForWeatherConditionImageName:(id)arg1;	// IMP=0x0000000000011531

@end

