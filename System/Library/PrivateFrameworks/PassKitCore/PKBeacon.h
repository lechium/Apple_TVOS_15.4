//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSUUID;

@interface PKBeacon : NSObject <NSSecureCoding>
{
    NSUUID *_proximityUUID;	// 8 = 0x8
    NSNumber *_major;	// 16 = 0x10
    NSNumber *_minor;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_relevantText;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fba3d
- (void).cxx_destruct;	// IMP=0x00000000000fbde7
@property(retain, nonatomic) NSString *relevantText; // @synthesize relevantText=_relevantText;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(retain, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(retain, nonatomic) NSUUID *proximityUUID; // @synthesize proximityUUID=_proximityUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fbc14
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fba45
- (id)description;	// IMP=0x00000000000fb919
- (id)proximityUUIDAsString;	// IMP=0x00000000000fb8c9
- (void)setProximityUUIDWithString:(id)arg1;	// IMP=0x00000000000fb850

@end

