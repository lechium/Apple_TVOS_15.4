//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSpeakableNamespaceProvider-Protocol.h>

@class NSString;

@interface _AFSpeakableUtterancePassThroughProvider : NSObject <AFSpeakableNamespaceProvider>
{
}

- (id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(_Bool *)arg2;	// IMP=0x00000000000825e5
- (id)stringForExpression:(id)arg1;	// IMP=0x00000000000825d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

