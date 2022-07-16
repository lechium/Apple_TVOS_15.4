//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PFStoryRecipeClip, PFStoryRecipePresentation;

@protocol PFStoryRecipePresentation
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) long long clipCount;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isEqualToPresentation:(id <PFStoryRecipePresentation>)arg1;
- (id <PFStoryRecipeClip>)clipAtIndex:(long long)arg1;
@end

