//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AMSEngagementDestination : NSObject <NSSecureCoding>
{
    _Bool _allowsResponse;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000118553
- (void).cxx_destruct;	// IMP=0x0000000000118588
@property(nonatomic) _Bool allowsResponse; // @synthesize allowsResponse=_allowsResponse;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001184a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000118406
- (id)description;	// IMP=0x000000000011839a
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000011832f

@end

