//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ToneLibrary/NSCopying-Protocol.h>

@interface TLAlertStoppingOptions : NSObject <NSCopying>
{
    _Bool _shouldWaitUntilEndOfCurrentRepetition;	// 8 = 0x8
    double _fadeOutDuration;	// 16 = 0x10
}

@property(nonatomic) _Bool shouldWaitUntilEndOfCurrentRepetition; // @synthesize shouldWaitUntilEndOfCurrentRepetition=_shouldWaitUntilEndOfCurrentRepetition;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
- (unsigned long long)hash;	// IMP=0x000000000001fa31
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f987
- (id)description;	// IMP=0x000000000001f8b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f884
- (id)init;	// IMP=0x000000000001f844

@end

