//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TFNDynamicColorSetterAdapter;

@interface TFNDynamicColorRecordedSetter : NSObject
{
    SEL _selector;
    Class _declaringClass;
    id _arguments;
    id <TFNDynamicColorSetterAdapter> _adapter;
}

@property(retain, nonatomic) id <TFNDynamicColorSetterAdapter> adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) id arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) Class declaringClass; // @synthesize declaringClass=_declaringClass;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;

@end

