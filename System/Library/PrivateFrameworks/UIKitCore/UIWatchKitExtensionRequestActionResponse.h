//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSActionResponse.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse
{
}

+ (id)responseWithWatchKitExtensionResult:(id)arg1;	// IMP=0x000000000064973c
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x000000000064986b
@property(readonly, nonatomic) NSDictionary *result;
- (id)initWithWatchKitExtensionResult:(id)arg1;	// IMP=0x0000000000649785

@end
