//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class CHVisualization;

@protocol CHVisualizationDelegate <NSObject>
- (void)visualizationNeedsDisplay:(CHVisualization *)arg1;
- (void)visualization:(CHVisualization *)arg1 needsDisplayInRect:(struct CGRect)arg2;
@end

