//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKGroup, PKPass;

@protocol PKGroupDelegate <NSObject>
- (void)group:(PKGroup *)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didRemovePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didUpdatePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didInsertPass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
@end

