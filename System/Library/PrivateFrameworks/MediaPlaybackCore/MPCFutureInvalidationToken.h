//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class MPCFuture;

__attribute__((visibility("hidden")))
@interface MPCFutureInvalidationToken : NSObject <NSCopying>
{
    MPCFuture *_future;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000eb48a
@property(retain, nonatomic) MPCFuture *future; // @synthesize future=_future;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eb464
- (id)description;	// IMP=0x00000000000eb43b

@end
