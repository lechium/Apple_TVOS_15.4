//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSString;

@interface PPSocialPerson : NSObject <NSSecureCoding>
{
    NSString *_handle;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003c173
- (void).cxx_destruct;	// IMP=0x000000000003c14b
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003bfbd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003bf4f
- (id)description;	// IMP=0x000000000003beb9
- (id)initWithHandle:(id)arg1 displayName:(id)arg2;	// IMP=0x000000000003be20

@end

