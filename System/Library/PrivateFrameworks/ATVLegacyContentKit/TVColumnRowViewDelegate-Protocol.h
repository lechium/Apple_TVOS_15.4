//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class TVColumnRowView;

@protocol TVColumnRowViewDelegate <NSObject>
- (double)columnRowView:(TVColumnRowView *)arg1 heightForRow:(long long)arg2;
- (double)columnRowView:(TVColumnRowView *)arg1 widthForColumn:(long long)arg2;
- (double)headerHeightForColumnRowView:(TVColumnRowView *)arg1;
@end
