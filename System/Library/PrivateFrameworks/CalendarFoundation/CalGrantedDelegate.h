//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface CalGrantedDelegate : NSObject <NSSecureCoding>
{
    NSString *_uri;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSString *_preferredUserAddress;	// 24 = 0x18
    long long _permission;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000457af
- (void).cxx_destruct;	// IMP=0x00000000000459d7
@property(nonatomic) long long permission; // @synthesize permission=_permission;
@property(copy, nonatomic) NSString *preferredUserAddress; // @synthesize preferredUserAddress=_preferredUserAddress;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000458df
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000457b7

@end

