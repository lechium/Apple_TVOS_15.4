//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>
{
    NSURLRequest *_request;	// 8 = 0x8
}

+ (id)keyWithRequest:(id)arg1;	// IMP=0x0000000000021815
- (void).cxx_destruct;	// IMP=0x0000000000021c1c
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (unsigned long long)hash;	// IMP=0x0000000000021bb9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002192e
- (id)description;	// IMP=0x0000000000021869
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002185e
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000000217a2

@end

