//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, NSData, NSString;

@interface ICAuthorizeMachineRequest : NSObject <NSCopying>
{
    NSString *_keybagPath;	// 8 = 0x8
    long long _qualityOfService;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    ICStoreRequestContext *_requestContext;	// 32 = 0x20
    NSData *_tokenData;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000012f29d
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000012f132
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012f079
- (id)initWithRequestContext:(id)arg1;	// IMP=0x000000000012effe

@end

