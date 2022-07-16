//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSMutableURLRequest.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSMutableCopying-Protocol.h>

@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>
{
    AMSURLRequestProperties *_properties;	// 16 = 0x10
}

+ (id)logableDescriptionForRequest:(id)arg1;	// IMP=0x0000000000226df6
- (void).cxx_destruct;	// IMP=0x0000000000226ef2
@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
- (id)description;	// IMP=0x0000000000226dda
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000226d18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000226d06
- (id)initWithRequest:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000226c9d
- (id)initWithRequest:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000226c0d
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000226bd1
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x0000000000226b74
- (id)_initWithCFURLRequest:(struct _CFURLRequest *)arg1;	// IMP=0x0000000000226b17

@end
