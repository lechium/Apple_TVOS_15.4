//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AMSXDDevice : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002421ef
+ (id)deviceFromIdentifier:(id)arg1;	// IMP=0x0000000000241b59
+ (id)allPairedDevices;	// IMP=0x0000000000241b29
+ (id)activePairedDevices;	// IMP=0x0000000000241af9
- (void).cxx_destruct;	// IMP=0x0000000000242215
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000241ff4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000241de4
@property(readonly, nonatomic) NSDictionary *JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x0000000000241bab
- (id)initWithDeviceID:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000241a83

@end
