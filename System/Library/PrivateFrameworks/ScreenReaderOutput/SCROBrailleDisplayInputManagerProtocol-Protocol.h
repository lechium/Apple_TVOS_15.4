//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class NSArray, NSString, SCROBrailleKey;

@protocol SCROBrailleDisplayInputManagerProtocol <NSObject>
- (NSString *)commandForBrailleKey:(SCROBrailleKey *)arg1;
- (void)configureWithDriverConfiguration:(NSArray *)arg1;
@end

