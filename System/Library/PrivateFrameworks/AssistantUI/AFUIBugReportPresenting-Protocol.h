//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AFUIBugReportPresentingDelegate;

@protocol AFUIBugReportPresenting
- (void)dismiss;
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (id)initWithDelegate:(id <AFUIBugReportPresentingDelegate>)arg1;
@end

