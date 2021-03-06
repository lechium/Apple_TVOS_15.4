//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError;

@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _success;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031c2e
- (void).cxx_destruct;	// IMP=0x0000000000031da1
@property(copy) NSError *error; // @synthesize error=_error;
@property _Bool success; // @synthesize success=_success;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000031ce6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031c36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031bd7

@end

