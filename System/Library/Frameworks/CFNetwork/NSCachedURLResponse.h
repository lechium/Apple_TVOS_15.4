//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSCachedURLResponseInternal, NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSCachedURLResponseInternal *_internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ca47c
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;	// IMP=0x00000000001ca445
- (void)_deallocInternalCFCachedURLResponse;	// IMP=0x00000000001ca411
- (const struct _CFCachedURLResponse *)_CFCachedURLResponse;	// IMP=0x00000000001ca3fa
- (void)dealloc;	// IMP=0x00000000001ca395
@property(readonly) unsigned long long storagePolicy;
@property(readonly, copy) NSDictionary *userInfo;
- (id)dataArray;	// IMP=0x00000000001ca321
@property(readonly, copy) NSData *data;
@property(readonly, copy) NSURLResponse *response;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c9ff1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c9d26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c9d1b
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;	// IMP=0x00000000001c9c47
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;	// IMP=0x00000000001c9b78
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;	// IMP=0x00000000001c9a87
- (id)initWithResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000000001c9a6f

@end

