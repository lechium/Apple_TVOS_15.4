//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFSingleConnectionXPCListener.h>

#import <ContentKit/NSXPCListenerDelegate-Protocol.h>
#import <ContentKit/WFJavaScriptRunnerHostProtocol-Protocol.h>

@class NSItemProvider, NSString;

@interface WFJavaScriptRunner : WFSingleConnectionXPCListener <NSXPCListenerDelegate, WFJavaScriptRunnerHostProtocol>
{
    NSItemProvider *_itemProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bbaba
@property(readonly, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (void)runJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bb911
- (id)initWithItemProvider:(id)arg1;	// IMP=0x00000000000bb7f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

