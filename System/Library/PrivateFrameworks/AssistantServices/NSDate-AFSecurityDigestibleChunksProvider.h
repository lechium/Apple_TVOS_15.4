//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

#import <AssistantServices/AFSecurityDigestibleChunksProviding-Protocol.h>

@class NSString;

@interface NSDate (AFSecurityDigestibleChunksProvider) <AFSecurityDigestibleChunksProviding>
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a00d
- (_Bool)af_isTomorrow;	// IMP=0x0000000000127348
- (_Bool)af_isToday;	// IMP=0x00000000001272ee
- (_Bool)_af_isSameDayAsDate:(id)arg1;	// IMP=0x00000000001271a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
