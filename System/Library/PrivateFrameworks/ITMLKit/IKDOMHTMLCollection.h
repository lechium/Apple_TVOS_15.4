//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDOMHTMLCollection-Protocol.h>

@class IKDOMNode;

@interface IKDOMHTMLCollection <IKJSDOMHTMLCollection>
{
    IKDOMNode *_parentNode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000433e5
@property(nonatomic) __weak IKDOMNode *parentNode; // @synthesize parentNode=_parentNode;
- (id)item:(unsigned long long)arg1;	// IMP=0x00000000000432eb
@property(readonly) unsigned long long length;
- (id)initWithAppContext:(id)arg1 node:(id)arg2;	// IMP=0x0000000000043193

@end
