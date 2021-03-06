//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray, NSDictionary, NSString;

@interface TVSettingsOSUpdateSelectConfigurationViewController : TSKViewController
{
    NSDictionary *_trainAudiences;	// 8 = 0x8
    NSDictionary *_colors;	// 16 = 0x10
    NSArray *_sortedTrainNames;	// 24 = 0x18
    NSString *_currentTrainName;	// 32 = 0x20
    NSString *_currentTrainInfoText;	// 40 = 0x28
    NSArray *_sortedAudiencesForTrain;	// 48 = 0x30
    unsigned long long _configurationLoadingState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000013cbd0
@property(nonatomic) unsigned long long configurationLoadingState; // @synthesize configurationLoadingState=_configurationLoadingState;
@property(copy, nonatomic) NSArray *sortedAudiencesForTrain; // @synthesize sortedAudiencesForTrain=_sortedAudiencesForTrain;
@property(copy, nonatomic) NSString *currentTrainInfoText; // @synthesize currentTrainInfoText=_currentTrainInfoText;
@property(copy, nonatomic) NSString *currentTrainName; // @synthesize currentTrainName=_currentTrainName;
@property(copy, nonatomic) NSArray *sortedTrainNames; // @synthesize sortedTrainNames=_sortedTrainNames;
@property(copy, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSDictionary *trainAudiences; // @synthesize trainAudiences=_trainAudiences;
- (void)_configurationDidChange:(id)arg1;	// IMP=0x000000000013c5b0
- (void)_configurationWillChange:(id)arg1;	// IMP=0x001000000013c540
- (void)_selectedConfiguration:(id)arg1;	// IMP=0x001000000013c4a0
- (void)_updateConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x001000000013c300
- (void)_adjustState;	// IMP=0x001000000013bfa0
- (id)loadSettingGroups;	// IMP=0x001000000013aba0
- (void)viewDidLoad;	// IMP=0x001000000013aa80
- (id)initWithTrains:(id)arg1 andColors:(id)arg2;	// IMP=0x001000000013a860

@end

