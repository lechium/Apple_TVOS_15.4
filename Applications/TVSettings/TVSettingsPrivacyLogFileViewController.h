//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TVSettingsDiagnosticLogsFacade;

@interface TVSettingsPrivacyLogFileViewController : TSKViewController
{
    _Bool _allowViewing;	// 8 = 0x8
    NSString *_logPath;	// 16 = 0x10
    TVSettingsDiagnosticLogsFacade *_logsFacade;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000139b70
@property(nonatomic) _Bool allowViewing; // @synthesize allowViewing=_allowViewing;
@property(retain, nonatomic) TVSettingsDiagnosticLogsFacade *logsFacade; // @synthesize logsFacade=_logsFacade;
@property(copy, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
- (void)_deleteItem:(id)arg1;	// IMP=0x0010000000139410
- (void)_airDropItem:(id)arg1;	// IMP=0x0010000000138fa0
- (void)_viewItem:(id)arg1;	// IMP=0x0010000000138cd0
- (id)loadSettingGroups;	// IMP=0x0010000000138610

@end
