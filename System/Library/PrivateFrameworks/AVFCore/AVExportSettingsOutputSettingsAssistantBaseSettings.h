//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVOutputSettingsAssistantBaseSettingsProvider-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider>
{
    NSDictionary *_exportSettings;	// 8 = 0x8
}

@property(readonly, nonatomic) NSDictionary *baseVideoSettings;
@property(readonly, nonatomic) NSDictionary *baseAudioSettings;
- (void)dealloc;	// IMP=0x0000000000125076
- (id)initWithOutputSettingsPreset:(id)arg1;	// IMP=0x0000000000125007
- (id)init;	// IMP=0x0000000000124ff3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

