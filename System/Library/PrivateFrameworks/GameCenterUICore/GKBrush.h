//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUICore/NSCopying-Protocol.h>

@interface GKBrush : NSObject <NSCopying>
{
}

+ (id)brush;	// IMP=0x0000000000006dd2
- (id)drawnImageForSize:(struct CGSize)arg1 opaque:(_Bool)arg2 input:(id)arg3;	// IMP=0x0000000000006eb2
- (double)scaleForInput:(id)arg1;	// IMP=0x0000000000006e39
- (struct CGSize)sizeForInput:(id)arg1;	// IMP=0x0000000000006e23
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;	// IMP=0x0000000000006e1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006de4

@end

