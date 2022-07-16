//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject
{
    NSMutableDictionary *_systemProperties;	// 8 = 0x8
    NSMutableDictionary *_dynamicProperties;	// 16 = 0x10
}

+ (id)dynamicPhotoLibraryProperties;	// IMP=0x0000000000014693
+ (id)staticPhotoLibraryProperties;	// IMP=0x000000000001460b
- (void).cxx_destruct;	// IMP=0x00000000000145e3
@property(retain, nonatomic) NSMutableDictionary *dynamicProperties; // @synthesize dynamicProperties=_dynamicProperties;
@property(retain, nonatomic) NSMutableDictionary *systemProperties; // @synthesize systemProperties=_systemProperties;
- (void)removePhotoLibraryProperties;	// IMP=0x00000000000144d9
- (id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;	// IMP=0x00000000000143a5
- (void)addDynamicProperty:(id)arg1 withProvider:(id)arg2;	// IMP=0x000000000001431f
- (void)addProperty:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000001428d
- (id)init;	// IMP=0x00000000000141ed

@end

