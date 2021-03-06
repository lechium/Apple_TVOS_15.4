//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebPluginConfiguration : NSObject <NSSecureCoding>
{
    NSString *_logKey;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000071439
- (void).cxx_destruct;	// IMP=0x000000000007145c
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000713c0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007132f

@end

