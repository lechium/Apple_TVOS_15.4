//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@class NSObject;
@protocol LSApplicationWorkspaceObserverProtocol;

@interface WorkspaceDownloadObserver : LSApplicationWorkspaceObserver
{
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;	// 8 = 0x8
}

- (void)applicationInstallsDidPrioritize:(id)arg1;	// IMP=0x00200000001cfc97
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x00100000001cfc7a
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x00100000001cfc5d
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x00100000001cfc40
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;	// IMP=0x00100000001cfc23
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00100000001cfc06
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00100000001cfbe9
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x00100000001cfbcc
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x00100000001cfbaf
@property(nonatomic) NSObject<LSApplicationWorkspaceObserverProtocol> *delegate;
- (void)stopObserving;	// IMP=0x00100000001cfb55
- (void)startObserving;	// IMP=0x00100000001cfb1d

@end
