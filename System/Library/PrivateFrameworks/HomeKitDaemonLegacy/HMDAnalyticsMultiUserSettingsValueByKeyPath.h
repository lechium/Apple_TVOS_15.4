//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HMDAnalyticsMultiUserSettingsValueByKeyPath : HMFObject
{
    int _type;	// 8 = 0x8
    long long _multiUserSettingsValueInteger;	// 16 = 0x10
    NSData *_multiUserSettingsValueData;	// 24 = 0x18
    NSString *_multiUserSettingsValueString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000496cb2
@property int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *multiUserSettingsValueString; // @synthesize multiUserSettingsValueString=_multiUserSettingsValueString;
@property(copy, nonatomic) NSData *multiUserSettingsValueData; // @synthesize multiUserSettingsValueData=_multiUserSettingsValueData;
@property long long multiUserSettingsValueInteger; // @synthesize multiUserSettingsValueInteger=_multiUserSettingsValueInteger;

@end
