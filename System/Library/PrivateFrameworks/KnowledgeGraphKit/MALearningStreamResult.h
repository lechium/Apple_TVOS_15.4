//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _TtC17KnowledgeGraphKit29MAWrapperLearningStreamResult;

@interface MALearningStreamResult : NSObject
{
    _TtC17KnowledgeGraphKit29MAWrapperLearningStreamResult *_underlyingObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d0251
@property(readonly, copy, nonatomic) NSString *description;
@property(readonly, nonatomic) double confidence;
@property(readonly, copy, nonatomic) NSString *detectedClass;
- (id)initWithWrapperLearningStreamResult:(id)arg1;	// IMP=0x00000000000d01a4

@end

