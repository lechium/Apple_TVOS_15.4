//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol AFOpportuneSpeakable, AFOpportuneSpeakingModelDelegate;

@protocol AFOpportuneSpeakingModel
- (MISSING_TYPE *)stop;
- (void)recordFeedbackOfType:(long long)arg1 forSpeakable:(id <AFOpportuneSpeakable>)arg2;
- (void)setSpeakable:(id <AFOpportuneSpeakable>)arg1;
- (void)startWithDelegate:(id <AFOpportuneSpeakingModelDelegate>)arg1;
@end

