//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionMonitoringProtocol-Protocol.h>

@class NSLocale, NSMutableArray, NSString, TIBiomeObserver, TICoreAnalyticsEventDispatcher, TIDPEventDispatcher, TIFeatureUsageMetricsCache, TIKBUserModel, TIKeyboardLayout, TISKMetricCollector, TITypingDESRecordWriter, TITypingSession;
@protocol OS_dispatch_queue;

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    _Bool _useDODML;	// 16 = 0x10
    TIKBUserModel *_userModel;	// 24 = 0x18
    TISKMetricCollector *_sensorKitMetricCollector;	// 32 = 0x20
    TICoreAnalyticsEventDispatcher *_coreAnalyticsEventDispatcher;	// 40 = 0x28
    TIDPEventDispatcher *_differentialPrivacyEventDispatcher;	// 48 = 0x30
    TIFeatureUsageMetricsCache *_featureUsageMetricsCache;	// 56 = 0x38
    TIBiomeObserver *_biomeObserver;	// 64 = 0x40
    TITypingSession *_currentTypingSession;	// 72 = 0x48
    TITypingDESRecordWriter *_desRecordWriter;	// 80 = 0x50
    NSLocale *_locale;	// 88 = 0x58
    TIKeyboardLayout *_currentLayout;	// 96 = 0x60
    NSMutableArray *_aggregatedEventObservers;	// 104 = 0x68
}

+ (_Bool)shouldRecordSession:(id)arg1;	// IMP=0x00000000000438bc
+ (id)loadAllStoredSessions;	// IMP=0x00000000000438af
+ (id)temporaryKeyboardsDirectory;	// IMP=0x0000000000043804
- (void).cxx_destruct;	// IMP=0x00000000000432f4
@property(retain, nonatomic) NSMutableArray *aggregatedEventObservers; // @synthesize aggregatedEventObservers=_aggregatedEventObservers;
@property(retain, nonatomic) TIKeyboardLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) TITypingDESRecordWriter *desRecordWriter; // @synthesize desRecordWriter=_desRecordWriter;
@property(retain, nonatomic) TITypingSession *currentTypingSession; // @synthesize currentTypingSession=_currentTypingSession;
@property(readonly, nonatomic) TIBiomeObserver *biomeObserver; // @synthesize biomeObserver=_biomeObserver;
@property(readonly, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache; // @synthesize featureUsageMetricsCache=_featureUsageMetricsCache;
@property(readonly, nonatomic) TIDPEventDispatcher *differentialPrivacyEventDispatcher; // @synthesize differentialPrivacyEventDispatcher=_differentialPrivacyEventDispatcher;
@property(readonly, nonatomic) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher; // @synthesize coreAnalyticsEventDispatcher=_coreAnalyticsEventDispatcher;
@property(readonly, nonatomic) TISKMetricCollector *sensorKitMetricCollector; // @synthesize sensorKitMetricCollector=_sensorKitMetricCollector;
@property(readonly, nonatomic) TIKBUserModel *userModel; // @synthesize userModel=_userModel;
- (void)tearDown;	// IMP=0x00000000000431fa
- (id)observeSession:(id)arg1 sessionParams:(id)arg2;	// IMP=0x0000000000042e2b
- (void)keyboardDidSuspend:(id)arg1 withSessionParams:(id)arg2;	// IMP=0x0000000000042d06
- (id)endTypingSession;	// IMP=0x0000000000042c88
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000042c3b
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000042ba4
- (id)initWithConfig:(id)arg1 metricDescriptorRegistry:(id)arg2;	// IMP=0x0000000000042779

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

