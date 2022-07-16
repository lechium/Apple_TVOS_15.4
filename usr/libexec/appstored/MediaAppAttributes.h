//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MediaAppPlatformAttributes, NSDictionary, NSMutableDictionary, NSString;

@interface MediaAppAttributes : NSObject
{
    NSMutableDictionary *_platformAttributes;	// 8 = 0x8
    NSDictionary *_platformAttributesDict;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_artistName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001cfd5b
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)attributesForPlatform:(id)arg1;	// IMP=0x00100000001cfc61
- (id)_devicePlatform;	// IMP=0x00100000001cfc54
@property(readonly, nonatomic) MediaAppPlatformAttributes *platformAttributes;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000001cfa0d

@end
