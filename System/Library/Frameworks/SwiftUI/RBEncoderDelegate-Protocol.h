//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/NSObject-Protocol.h>

@class NSData;

@protocol RBEncoderDelegate <NSObject>

@optional
- (NSData *)encodedCGFontData:(struct CGFont *)arg1 error:(id *)arg2;
- (NSData *)encodedImageData:(CDStruct_27041886)arg1 error:(id *)arg2;
- (NSData *)encodedMetadata;
@end

