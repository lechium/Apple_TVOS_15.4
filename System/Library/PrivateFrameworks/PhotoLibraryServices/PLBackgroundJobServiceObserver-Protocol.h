//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@protocol PLBackgroundJobServiceObserver <NSObject>

@optional
- (void)backgroundJobServiceDidChangeStateFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)backgroundJobServiceDidShutdown;
@end

