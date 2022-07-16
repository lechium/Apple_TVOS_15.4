//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchRemote/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface TRMessage : NSObject <NSSecureCoding>
{
    NSDictionary *_userInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023a66
- (void).cxx_destruct;	// IMP=0x0000000000023ba4
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)description;	// IMP=0x0000000000023b35
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023a98
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023a6e

@end

