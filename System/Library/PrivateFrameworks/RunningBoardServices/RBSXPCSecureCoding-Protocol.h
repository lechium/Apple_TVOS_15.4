//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/NSObject-Protocol.h>

@protocol RBSXPCDecoding, RBSXPCEncoding;

@protocol RBSXPCSecureCoding <NSObject>
+ (_Bool)supportsRBSXPCSecureCoding;
- (id)initWithRBSXPCCoder:(id <RBSXPCDecoding>)arg1;
- (void)encodeWithRBSXPCCoder:(id <RBSXPCEncoding>)arg1;
@end
