//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVKeyPath-Protocol.h>
#import <AVFCore/NSCopying-Protocol.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying>
{
    NSString *_topLevelKey;	// 8 = 0x8
    NSString *_secondLevelKey;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *secondLevelPropertyKey; // @synthesize secondLevelPropertyKey=_secondLevelKey;
@property(readonly, nonatomic) NSString *topLevelPropertyKey; // @synthesize topLevelPropertyKey=_topLevelKey;
@property(readonly, nonatomic) NSString *keyPathString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012f61d
- (void)dealloc;	// IMP=0x000000000012f5d3
- (id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2;	// IMP=0x000000000012f559

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

