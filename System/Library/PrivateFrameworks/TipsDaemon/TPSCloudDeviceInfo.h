//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject
{
    NSString *_model;	// 8 = 0x8
    NSString *_minOSVersion;	// 16 = 0x10
    NSString *_maxOSVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000265a4
@property(copy, nonatomic) NSString *maxOSVersion; // @synthesize maxOSVersion=_maxOSVersion;
@property(copy, nonatomic) NSString *minOSVersion; // @synthesize minOSVersion=_minOSVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (id)debugDescription;	// IMP=0x00000000000263fb
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000262eb

@end

