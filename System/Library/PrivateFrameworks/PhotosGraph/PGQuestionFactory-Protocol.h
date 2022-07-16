//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, PGManagerWorkingContext;

@protocol PGQuestionFactory <NSObject>
@property(readonly, nonatomic) unsigned short questionType;
@property(readonly, nonatomic) long long questionOptions;
- (NSArray *)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(void (^)(double, _Bool *))arg2;
- (id)init;
- (id)initWithWorkingContext:(PGManagerWorkingContext *)arg1;
@end

